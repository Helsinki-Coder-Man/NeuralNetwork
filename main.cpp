/*
	+-------------------------------------------------------------+
	|	Written by: Noah Peake				      |
	|	13/11/22					      |
  	+-------------------------------------------------------------+
*/

#include <iostream>
#include <vector>

#include "neuron.h"


std::vector<neuron> inputLayer(1);
std::vector<neuron> hiddenLayer(2);
std::vector<neuron> outputLayer(1);

double sigmoid(double x){
	return 1 / (1 + pow(2.718,-x));
}

void initLayer(std::vector<neuron>& Layer){
	
	srand(time(NULL));

	for(unsigned int i = 0; i < Layer.capacity(); i++)
	{
		Layer[i].bias.push_back(rand() % 10 + 1);

		for(unsigned int j = 0; j < Layer.capacity(); j++)
		{
			Layer[i].weight.push_back((rand() % 100) / 100);
//			Layer[i].bias.push_back(rand() % 10 + 1);

		//	Layer[i].initNeuron();
		}
	}

}

int main()
{
	int test;
	initLayer(inputLayer);
	initLayer(hiddenLayer);
//	initLayer(outputLayer);

	// The value weighted sum of all of previous neurons
	double activVal;

	std::cout << "\nEnter the value for the input layer\n:";
	std::cin >> test; inputLayer[0].activation = sigmoid(test - inputLayer[0].bias[0]);
	std::cout << "\ninput Val Activation: " << inputLayer[0].activation;
	
	

/*	for(unsigned int i = 0; i < hiddenLayer.capacity(); i++)
	{
		
	}
*/

}
