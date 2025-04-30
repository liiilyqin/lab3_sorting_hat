#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class DecisionTree {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        if (x[8] <= 2.0) {
                            return 0;
                        }

                        else {
                            if (x[2] <= 3.5) {
                                return 2;
                            }

                            else {
                                if (x[7] <= 2.5) {
                                    return 1;
                                }

                                else {
                                    return 3;
                                }
                            }
                        }
                    }

                protected:
                };
            }
        }
    }