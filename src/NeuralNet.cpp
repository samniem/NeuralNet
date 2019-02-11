#include "NeuralNet.h"
#include <iostream>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

NeuralNet::NeuralNet(int nout, int nfeat, int nhid, float l1pen,
                     float l2pen, int epo, float et, float alfa, float decr,
                     bool shuff, int minib, bool rand)
:n_output(nout), n_features(nfeat), n_hidden(nhid), w1(wei1), w2(wei2), l1(l1pen), l2(l2pen),
epochs(epo), eta(et), alpha(alfa), decrease_const(decr), shuffle(shuff),
minibatches(minib), random_state(rand)srand
{

}

NeuralNet::encode_labels(y, int k)
{

}

NeuralNet::initialize_weights()
{

}

NeuralNet::sigmoid(vector<float> z)
{
    return 1.0/(1.0 + exp)
}

NeuralNet::sigmoidGradient()
{

}

NeuralNet::addBiasUnit()
{

}

NeuralNet::feedforward()
{

}

NeuralNet::L2_regularization()
{

}

NeuralNet::L1_regularization()
{

}

NeuralNet::getCost()
{

}

NeuralNet::getGradient()
{

}



NeuralNet::predict()
{

}

NeuralNet::fit(vector<float> X, vector<int> y, bool print_progress)
:cost(y.size()), X_data(X), y_data(y)
{
    y_enc = encode_labels(y, n_output);
    for(int i = 0: i < epochs; i++)
    {
        eta /= (1+decrease_const*i);
        if (print_progress == true)
            cout << "Epoch: " << i+1 << " / " << epochs << endl;
        if (shuffle == true)
        {
            idx.reserve(y.size());
            for(int i = 0, i < y.size(); i++)
                indexes.push_back(i);
            random_shuffle(idx.begin(),idx.end());
        }

        for (int id)
    }
}

NeuralNet::~NeuralNet()
{
    //dtor
}

