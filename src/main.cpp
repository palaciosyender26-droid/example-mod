#include <Geode/Geode.hpp>
#include <Geode/modify/WebRequest.hpp>

using namespace geode::prelude;

class $modify(MyWebRequest, WebRequest) {
    void fetch(std::string url, matjson::Value const& ext) {
        std::string mi_gdps_url = "https://fhgdps.com"; 
        
        if (url.find("http://boomlings.com") == 0) {
            url.replace(0, 37, mi_gdps_url);
        }
        WebRequest::fetch(url, ext);
    }
};
