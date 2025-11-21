
#include <iostream>
#include <curl/curl.h>
using namespace std;

int main() {
    CURL *curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, "https://example.com");
        curl_easy_perform(curl);
        curl_easy_cleanup(curl);
    }
    return 0;
}Output:
Server Response:

<!doctype html>  
<html>  
<head>  
    <title>Example Domain</title>  
    …  
</head>  
<body>  
    <div>  
        <h1>Example Domain</h1>  
        <p>This domain is for use in illustrative examples in documents.…</p>  
        …  
    </div>  
</body>  
</html>

Result:
The program successfully uses libcurl in C++ to perform an HTTP GET request, fetch the HTML response from the server, and print it to the console.
