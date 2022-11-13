#include "neuron.h"


//Initialize neuron values
void neuron::initNeuron(){
	
//	srand(time(NULL));
	
	weight.push_back((rand() % 100) / 100);
	bias.push_back(rand() % 10 + 1);
	
}

