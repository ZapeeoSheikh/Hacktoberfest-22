// This is flutter's http API calling method. I've also included the dependencies that I used

import 'package:api_get/home.dart';
import 'package:flutter/material.dart';
import 'package:get/get.dart';
import 'dart:convert';
import 'package:http/http.dart' as http;

void main() {
  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
    return GetMaterialApp(
      title: 'Flutter Demo',
      theme: ThemeData(
        primarySwatch: Colors.blue,
      ),
      home: const Home(),
    );
  }
}


class Home extends StatefulWidget {
  const Home({super.key});

  @override
  State<Home> createState() => _HomeState();
}

class _HomeState extends State<Home> {
  JokeApi client = JokeApi();
  @override
  Widget build(BuildContext context) {
    final width = MediaQuery.of(context).size.width;
    final height = MediaQuery.of(context).size.height;
    TextEditingController keyword = TextEditingController();

    return Scaffold(
      body: FutureBuilder<Jokemodel?>(
        future: client.getJoke(keyword.text),
        builder: (context, snapshot) {
          var response = snapshot.data;
          return Container(
            height: height / 2,
            width: width,
            child: Column(
              mainAxisAlignment: MainAxisAlignment.center,
              crossAxisAlignment: CrossAxisAlignment.center,
              children: [
                Padding(
                  padding: const EdgeInsets.all(16.0),
                  child: TextFormField(
                    controller: keyword,
                    validator: (value) {
                      if (keyword == "") {
                        return "Please Enter a Keyword";
                      }
                    },
                    decoration: const InputDecoration(
                        labelText: "Enter Key",
                        border: OutlineInputBorder(
                            borderSide: BorderSide(
                          color: Colors.blue,
                        ))),
                  ),
                ),
                ElevatedButton(
                    onPressed: () {
                      JokeApi().getJoke(keyword.text);
                    },
                    child: const Text("search")),
                Padding(
                  padding: const EdgeInsets.symmetric(horizontal: 16.0),
                  child: Text(
                    '${response?.setup}',
                    style: TextStyle(fontSize: 24, color: Colors.black),
                  ),
                ),
                Padding(
                  padding: const EdgeInsets.symmetric(horizontal: 16.0),
                  child: Text(
                    '${response?.delivery}',
                    style: TextStyle(fontSize: 24, color: Colors.black),
                  ),
                ),
              ],
            ),
          );
        },
      ),
    );
  }
}


// ================== Api Services ==================
class JokeApi {
  Future<Jokemodel?> getJoke(String keyword) async {
    var url = Uri.parse("https://v2.jokeapi.dev/joke/Any?$keyword");
    try {
      var response = await http.get(url);

      if (response.statusCode == 200) {
        print(response.body);
        return Jokemodel.fromJson(jsonDecode(response.body));
      }
      print(response.body.toString());
    } catch (e) {
      print(e.toString());
    }
  }
}


// ======================= API Model==================
import 'dart:convert';

Jokemodel jokemodelFromJson(String str) => Jokemodel.fromJson(json.decode(str));

String jokemodelToJson(Jokemodel data) => json.encode(data.toJson());

class Jokemodel {
    Jokemodel({
        this.error,
        this.category,
        this.type,
        this.setup,
        this.delivery,
        this.flags,
        this.id,
        this.safe,
        this.lang,
    });

    bool? error;
    String? category;
    String? type;
    String? setup;
    String? delivery;
    Flags? flags;
    int? id;
    bool? safe;
    String? lang;

    factory Jokemodel.fromJson(Map<String, dynamic> json) => Jokemodel(
        error: json["error"],
        category: json["category"],
        type: json["type"],
        setup: json["setup"],
        delivery: json["delivery"],
        flags: Flags.fromJson(json["flags"]),
        id: json["id"],
        safe: json["safe"],
        lang: json["lang"],
    );

    Map<String, dynamic> toJson() => {
        "error": error,
        "category": category,
        "type": type,
        "setup": setup,
        "delivery": delivery,
        "flags": flags!.toJson(),
        "id": id,
        "safe": safe,
        "lang": lang,
    };
}

class Flags {
    Flags({
        this.nsfw,
        this.religious,
        this.political,
        this.racist,
        this.sexist,
        this.explicit,
    });

    bool? nsfw;
    bool? religious;
    bool? political;
    bool? racist;
    bool? sexist;
    bool? explicit;

    factory Flags.fromJson(Map<String, dynamic> json) => Flags(
        nsfw: json["nsfw"],
        religious: json["religious"],
        political: json["political"],
        racist: json["racist"],
        sexist: json["sexist"],
        explicit: json["explicit"],
    );

    Map<String, dynamic> toJson() => {
        "nsfw": nsfw,
        "religious": religious,
        "political": political,
        "racist": racist,
        "sexist": sexist,
        "explicit": explicit,
    };
}


/*
=============== dependencies ===================
 http: ^0.13.5
  get: ^4.6.5

*/
