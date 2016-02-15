#include "WebServer.h"
#include "LandingPageHandler.h"

int main(int argc, char** argv){
    
    LandingPageHandler landingPageHandler;

    WebServer server(8080);
    server.addController(&landingPageHandler);
    server.start();
}

