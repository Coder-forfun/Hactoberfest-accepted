import 'package:flutter/material.dart';
import 'dart:convert';
import 'package:http/http.dart' as http;

late Map mapResponse;
late Map dataResponse;

class StarWars extends StatefulWidget {
  @override
  _StarWarsState createState() => _StarWarsState();
}

class _StarWarsState extends State<StarWars> {
  String textEntered = "";

  apicall() async {
    http.Response response;
    response = await http.get(Uri.parse(
        "https://api.funtranslations.com/translate/sith.json?text=$textEntered"));

    setState(() {
      var mapResponse = json.decode(response.body);
      dataResponse = mapResponse['contents'];
    });
  }

  @override
  void initState() {
    apicall();
    super.initState();
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        backgroundColor: Colors.amberAccent.shade400,
        elevation: 4,
        title: Text(
          "StarWars Translate",
          style: TextStyle(fontSize: 30, fontWeight: FontWeight.bold,color: Colors.black),
        ),
      ),
      body: Column(
      mainAxisAlignment: MainAxisAlignment.start,
        crossAxisAlignment: CrossAxisAlignment.center,
        children: [

           Container(
            height: 250,
            width: 300,
            margin: EdgeInsets.all(10),
            child: new Image.asset(
              'assets/sithSw.jpg',
              alignment: Alignment.topCenter,
            ),
          ),
          Container(
            margin: EdgeInsets.all(10),
            child: TextField(
              obscureText: false,
              decoration: new InputDecoration(
                hintText: "Enter you text here",
                contentPadding: EdgeInsets.all(10)
              ),
              onChanged: (String text) {
                setState(() {
                  textEntered = text;
                });
              },
            ),
          ),
          Container(
            margin: EdgeInsets.fromLTRB(20, 10, 20, 10),
            child: ElevatedButton(
              onPressed: () {
                apicall();
              },
              child: Text("Translate"),
            ),
          ),

           Container(

            child: Text("The translated text is", style: TextStyle(
              fontSize: 15,
              fontWeight: FontWeight.bold
            
            ),),
          ),
          Container(
              child: dataResponse == null
                  ? Text("Data is Loading...Please Wait")
                  : Text(dataResponse['translated'].toString())),
        ],
      ),
    );
  }
}
