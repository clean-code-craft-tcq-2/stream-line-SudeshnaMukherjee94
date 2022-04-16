#define NO_OF_READINGS 50

void print(float Temperature, float SOC);
void ReadParametersFromFile(float* Temperature, float* SOC);
int PrintParameterToConsole(float* Temperature, float* SOC);
void ParametersSender();
