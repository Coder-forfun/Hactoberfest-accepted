rm(list=ls()) ## remove existing variables in environment
data(logit,package="mcmc") ## load logit dataset from MCMC package 

Y <- logit$y
X <- data.matrix(logit[,2:5])
N=1e5 # sample.size
d=4 # dimension
s=20 # proposal variance
f <- function(beta) prod(dbinom(Y,size=1,prob=1/(1+exp(-X%*%beta))))*prod(dnorm(beta,0,s)) # target density

# markov chain
beta = matrix(0,nrow=N,ncol=d)
acc.prob = numeric(N) # initialize acceptance probability

## IMPLEMENTING SIMPLE RANDOM WALK METROPOLIS ALGORITHM
for(i in 2:N){
  if(i%%1e3==0) print(i/1e3)
  y =rnorm(d,0,0.48) + beta[i-1,]
  alpha = min(1, f(y)/f(beta[i-1,]))
  if(log(runif(1))<log(alpha)){
    beta[i,] = y
    acc.prob[i] = 1
  }else{
    beta[i,] = beta[i-1,]
  }
}
mean(acc.prob) # check acceptance probability--should be ~0.23
plot(cumsum(acc.prob)/(1:N),col="red",type="l",xlab="",ylab="") # see running plot of acceptance probability--should convergence to 0.23
abline(h=0.23,col="blue",lty=2) # horizontal line at 0.23
