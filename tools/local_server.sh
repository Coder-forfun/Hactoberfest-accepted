#!/bin/bash
# written by TheKnight
# this can help you in so many ways

BLUE='\033[0;34m'
RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m'


check_distro(){
  distro=""
  # check if deb based system
  if [ -f /etc/debian_version ]; then
      distro="deb"
  elif [ -f /etc/redhat-release ]; then
      distro="redhat"
  elif [ -f /etc/arch-release ]; then
      distro="arch"
  else
      distro="unknown"
  fi
  echo $distro


}
distros=`check_distro`
# echo $distros

user=`whoami`
install_dependencies(){
  echo -e "${BLUE}"$distros" System detected...${NC}"
  echo -e "${BLUE}Installing dependencies"
  if [ "$distros" == "deb" ]; then

    for i in {"nodejs","npm","python","python3","php*","ruby"};do
      sudo apt-get install $i -y
  
    done



  elif [ "$distros" == "redhat" ]; then
   for i in {"nodejs","npm","python","python3","php*","ruby"};do
      sudo dnf install $i -y
  
    done



  
  elif [ "$distros" == "arch" ]; then
    for i in {"nodejs","npm","python","python3","php*","ruby"};do
      sudo pacman install $i -y
  
    done



  else
    echo "Unknown distro"
  fi

  echo -e "Dependencies installed${NC}"
  echo "done" > /home/"$user"/.server_install.txt

}

echo -e "${GREEN}A script to run different local server on localhost"
if [ "$1" == "list" ]; then
  echo "Listing All Server${NIC}"
else
  if [ "$1" == "-h" ]; then
    echo "Listing help..."

  else

    echo "Running $1 server on localhost"
  fi
fi


echo "Tip:Use ngrok to exposing your home to internet"
if [ "$1" == "python3" ]; then

  python3 -m http.server --bind 127.0.0.1 "$2"
  echo "Done"



elif [ "$1" == "python" ]; then
  
  python -m http.server --bind 127.0.0.1 "$2"

  

elif [ "$1" == "php" ]; then
  php -S localhost:"$2"
  echo "Done"

elif [ "$1" == "ruby" ]; then
  ruby -run -e httpd . -p"$2"
  echo "Done"


elif [ "$1" == "-u" ]; then
  echo "Updating dependencies"
  sudo rm -rf /home/"$user"/.server_install.txt
  install_dependencies
elif [ "$1" == "nodejs" ]; then
  



  sudo npm install -g http-server
  http-server -p "$2"
  echo "Done"

elif [ "$1" == "list" ]; then
  echo -e "\n Currently Server Included...\n\n\t1.Python3\n\t2.Python2\n\t3.PHP\n\t5.Ruby\n\t6.Nodejs"
  echo -e "\nIf you like this script please add more"

elif [ "$1" == "-h" ]; then
  echo -e "\n\tUsage: $0 [python3|python|php|ruby|nodejs|list] [port]"

fi

if [ ! -f /home/"$user"/.server_install.txt ]; then
  install_dependencies
fi
