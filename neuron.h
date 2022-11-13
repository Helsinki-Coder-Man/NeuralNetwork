#include <cmath>
#include <time.h>
#include <vector>
#define e 2.718281828459045

struct neuron
{
	
	std::vector<int> bias;
	std::vector<double> weight;
	double activation;

	neuron() : activation(0) {}
//	neuron(double input);

	
	void generateBias(bool isRandom);
	void generateWeight(bool isRandom);

	void initNeuron();
};
