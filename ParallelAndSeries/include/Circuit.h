#ifndef CIRCUIT_H
#define CIRCUIT_H


class Circuit
{
    public:
        Circuit();
        virtual ~Circuit();

        double GetNumberOfResistors() { return NumberOfResistors; }
        void SetNumberOfResistors(double val) { NumberOfResistors = val; }

        unsigned int CircuitType;
        double* Resistances;
        double TotalResistance();

    protected:

    private:
        double NumberOfResistors;

        double SeriesResistance();
        double ParallelResistance();
        int NumberOfResistors;
};

#endif // CIRCUIT_H
