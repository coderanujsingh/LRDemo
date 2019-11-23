Action()
{
	web_custom_request("web_custom_request",
	                   "URL=www.example.com",
	                   "METHOD=GET",
	                   "TargetFrame=",
	                   "Resources=0",
	                   "Referer=",
	                   "BODY=",
	                   LAST);
	                   
	return 0;
}
