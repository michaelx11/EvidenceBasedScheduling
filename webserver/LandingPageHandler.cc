#include "LandingPageHandler.h"

bool LandingPageHandler::validPath(const char* path, const char* method){
  if(strcmp(path, "/") == 0 && strcmp("GET", method) == 0){
    return true;
  }
  return false;
}

void LandingPageHandler::createResponse(struct MHD_Connection * connection,
    const char * url, const char * method, const char * upload_data,
    size_t * upload_data_size, std::stringstream& response){

//  response << "<html><head><title>Hello World from cpp</title></head><body>Hello World at "
//    << time_now->tm_hour << ":" << time_now->tm_min << ":" << time_now->tm_sec << "!</body></html>";
  response << "<html><head><title>Welcome to the Scheduler Landing Page!</title></head><body>Browese your scheduling score here!</body></html>";
}
