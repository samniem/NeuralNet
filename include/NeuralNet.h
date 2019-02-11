#ifndef NEURALNET_H
#define NEURALNET_H

struct onehot {
    int
};

class NeuralNet
{
    public:
        NeuralNet(int nout, int nfeat, int nhid = 150, float l1pen = 0.0,
                     float l2pen = 0.0, int epo = 100, float et = 0.001, float alfa = 0.0,
                     float decr = 0.001, bool shuff=true, int minib = 1, int rand=0);
        virtual ~NeuralNet();

        fit(vector<float> X, vector<int> y, bool print_progress);

    protected:

    private:
        int n_output;
        int n_features;
        int n_hidden;
        float w1;
        float w2;
        float l1;
        float l2;
        int epochs;
        float eta;
        float alpha;
        float decrease_const;
        bool shuffle;
        int minibatches = 1;
        int random_state;//fit variables

        //fit variables
        vector<float> cost;
        vector<float> X_data;
        vector<int> y_data;
        vector<float> delta_w1_prev;
        vector<float> delta_w2_prev;
        vector<int> idx;
        vector<int> mini;
};

#endif // NEURALNET_H
