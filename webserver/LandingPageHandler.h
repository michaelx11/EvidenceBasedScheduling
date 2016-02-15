#ifndef _LANDING_PAGE_HANDLER_H_
#define _LANDING_PAGE_HANDLER_H_

#include "WebServer.h"

class LandingPageHandler: public DynamicController {
  public:
    virtual bool validPath(const char* path, const char* method);
    virtual void createResponse(struct MHD_Connection * connection,
        const char * url, const char * method, const char * upload_data,
        size_t * upload_data_size, std::stringstream& response);
};

#endif
