// An interface for backpropagation compatible network layer.
class IBackpropagation {
 public:
   virtual ScopeArray<float> Feedforward(const ScopeArray<float>& inputs) = 0;
   virtual ScopeArray<float> Backpropagate(const ScopeArray<float>& activations) = 0;

   // Initializing the layer parameters:
   // `eta`   : Controls the rate or speed at which the model learns
   // `alpha` : The amount of inertia of past updates is controlled via 
   //           the addition of a new hyperparameter, often referred to
   //           as the "momentum" or "velocity".
   virtual void Initialize(const float eta, const float alpha) = 0;
};
