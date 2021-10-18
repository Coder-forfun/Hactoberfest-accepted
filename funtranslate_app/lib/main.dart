import 'package:animated_splash_screen/animated_splash_screen.dart';
import 'package:flutter/material.dart';
import 'package:funtranslate/views/got.dart';
import 'package:funtranslate/views/homePage.dart';
import 'package:funtranslate/views/starwars.dart';
import 'package:funtranslate/views/yoda.dart';

void main() {
  runApp(const MyApp());
}
class MyApp extends StatelessWidget {
  const MyApp({Key? key}) : super(key: key);

  // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
        home:AnimatedSplashScreen(
          splash: 'assets/icon.jpg',
          splashIconSize: 200,
          backgroundColor: Colors.black54,
          duration: 3000,
          splashTransition: SplashTransition.scaleTransition,
        
          nextScreen: HomePage()),
     
    );
  }
}

