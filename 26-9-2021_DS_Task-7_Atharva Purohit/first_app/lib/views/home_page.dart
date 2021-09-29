// ignore_for_file: use_key_in_widget_constructors, prefer_const_constructors

import 'package:flutter/material.dart';
import 'package:url_launcher/url_launcher.dart';
class HomePage extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('Biodata'),
        centerTitle: true,
        backgroundColor:Colors.indigoAccent,

      ),
      body: Column(
        children: [
          
      Container(

          
          padding: EdgeInsets.only(left: 50,top: 20),
          child: Image.asset('assets/me.jpeg',
          height: 350,
          fit: BoxFit.fill,
          ),
      ),
      Container(
        padding: EdgeInsets.all(20),
        
        margin: EdgeInsets.symmetric(vertical: 10,horizontal: 10),
       
        child: Text('Atharva Purohit' ),
      ),
      Container(
        padding: EdgeInsets.all(5),
        
        margin: EdgeInsets.symmetric(horizontal: 10),
        
        child:Text('ai and ds') ,
      ),
      Container(
              
              child: ElevatedButton(
              onPressed: _launchURL,
              child: Text('insta'),
              style: ElevatedButton.styleFrom(
              primary: Colors.redAccent, //background color of button
                  side: BorderSide(width:3, color:Colors.brown), //border width and color
              elevation: 3, //elevation of button
              shape: RoundedRectangleBorder( //to set border radius to button
              borderRadius: BorderRadius.circular(50)
                  ),
              
      ),
       ), decoration: BoxDecoration(
            borderRadius: BorderRadius.vertical(
              bottom: Radius.circular(3),
              
            ),
      )
      )
  ],
      ),
      
      
        
        );


  }
}
_launchURL() async {
  const url = 'https://www.instagram.com/invites/contact/?i=1w6ydvxpd8g8m&utm_content=hgt8ds0';
  await launch(url);
}