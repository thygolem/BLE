//GLOBAL VAR
int scanTime = 1;
const int CUTOFF = -50;
int best = CUTOFF;
long lastEeconnectAttemp = 0;
String formattedDate;
String nearby_alert;
String msg;
//WIFI
const char* ssid = "3R_TECHNICAL";
const char* password = "z1k61dqk";
const char* mqtt_server = "x";
const char* mqtt_user = "x";
const char* mqtt_password = "x";
int mqtt_port = 1;

const char* topic = "indoor";
const char* topic_led = "unoled";

//const char* ... es un char array
