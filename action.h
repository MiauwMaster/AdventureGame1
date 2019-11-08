typedef enum {false, true} myBool;

void move(int direction);
void take(const char* objectName);
void drop(const char* objectName);
void listItemsInLocation(const char* objectName, myBool descriptive);
void look();
