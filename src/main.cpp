#include "crow.h"
#include <bits/stdc++.h>
using namespace std;
int main()
{
    crow::SimpleApp app; 
    
    
    CROW_ROUTE(app,"/")([](){
        auto page = crow::mustache::load("home.html");
        crow :: mustache :: context context;
        context["Name_of_News"] = "Sports News";
        return page.render(context);
    });
    CROW_ROUTE(app,"/submit-form").methods(crow::HTTPMethod::Post)([](const crow::request &req) {
        
        map<string,string> mp;
        auto resp = crow::query_string(req.url_params.get("Name"));
        return resp;

    });
    app.bindaddr("127.0.0.1").port(8080).multithreaded().run();
}