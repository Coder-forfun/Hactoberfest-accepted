// ignore: file_names
import 'dart:ui';

import 'package:flutter/material.dart';
import 'package:funtranslate/views/yoda.dart';
import 'package:funtranslate/views/starwars.dart';
import 'package:funtranslate/views/got.dart';

class HomePage extends StatelessWidget {
  const HomePage({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        elevation: 4,
        title: Text("Fun Translator",style: TextStyle(fontSize: 30,fontWeight: FontWeight.bold,color: Colors.black),),
        backgroundColor: Colors.amberAccent.shade400,
        centerTitle: true,
        
      ),
      body: Container(
        height: double.infinity,
        width: double.infinity,
        decoration: BoxDecoration(
          gradient: LinearGradient(
            // Where the linear gradient begins and ends
            begin: Alignment.topRight,
            end: Alignment.bottomLeft,
            // Add one stop for each color. Stops should increase from 0 to 1
            // stops: [0.1, 0.5, 0.7, 0.9],
            colors: [
              Colors.indigo.shade300,
              Colors.indigo.shade800,
              Colors.indigo.shade700,
              Colors.indigo.shade500,
              Colors.indigo.shade300,
            ],
          ),
        ),
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          // ignore: prefer_const_literals_to_create_immutables
          children: [
            ElevatedButton(
              style: ButtonStyle(
                backgroundColor: MaterialStateProperty.all(Colors.amber),
                padding: MaterialStateProperty.all(EdgeInsets.all(10)),
              ),
              child: Text(
                'Yoda',
                style: TextStyle(fontSize: 30, color: Colors.black),
              ),
              onPressed: () {
                // Navigator.pushNamed(context, '/second');
                Navigator.push(context,
                      MaterialPageRoute(builder: (context) => Yoda()));
              },
            ),
            SizedBox(
              height: 100,
            ),
            ElevatedButton(
              style: ButtonStyle(
                backgroundColor: MaterialStateProperty.all(Colors.amber),
                padding: MaterialStateProperty.all(EdgeInsets.all(10)),
              ),
              child: Text('Starwars',
                  style: TextStyle(fontSize: 30, color: Colors.black)),
              onPressed: () {
                // Navigator.pushNamed(context, '/third');
                Navigator.push(context,
                      MaterialPageRoute(builder: (context) => StarWars()));
                  
              },
            ),
            SizedBox(
              height: 100,
            ),
            ElevatedButton(
              style: ButtonStyle(
                backgroundColor: MaterialStateProperty.all(Colors.amber),
                padding: MaterialStateProperty.all(
                    EdgeInsets.fromLTRB(20, 10, 20, 10)),
              ),
              child: Text(
                'Got',
                style: TextStyle(fontSize: 30, color: Colors.black),
              ),
              onPressed: () {
                // Navigator.pushNamed(context, '/fourth');
                Navigator.push(context,
                      MaterialPageRoute(builder: (context) => Got()));
              },
            ),
          ],
        ),
      ),
    );
  }
}
