#include "Experiment.h"

Experiment::Experiment(void)
{
	ts = TaskSet();
}

Experiment::setParameter(void)
{

}

Experiment::generateTaskSet(void)
{

}

int Experiment::run(void)
{
	// generate task
	// apply tests
	// output

	/*
	std::cout << "running #" << "1" << std::endl;
	std::ifstream file;
	file.open("data/sample_task.in");

        rta r = rta();
        bar b = bar();
        r.Setcore(4);
        b.Setcore(4);

	if(file.is_open()) {
		ts.readTaskSet(file);
		ts.printTaskSet();

                r.Setmodel(ts);
                b.Setmodel(ts);
                std::cout<<"Result: bar "<<b.Simulate()<<" rta "<<r.Simulate()<<std::endl;
		file.close();
	} else {
		std::cout << "no input file" << std::endl;
	}
	*/
	return 1;
}

int Experiment::output(void)
{
	return 1;
}