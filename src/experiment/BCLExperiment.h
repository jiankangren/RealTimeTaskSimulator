#ifndef __BCL_EXP__
#define __BCL_EXP__

#include <vector>

#include "../dataproc/ExperimentLogger.h"
#include "../experiment/Experiment.h"
#include "../ops/TaskSetUtil.h"
#include "../test/BCL.h"
#include "../test/GFB.h"
#include "../generator/UniFastGenerator.h"

class BCLExperiment : public Experiment
{
private:
	int init();
	UniFastGenerator *ug;
	//BCL *bcl;
	GFB *gfb;
	int init(std::ifstream &file);
	int loadEnvironment(std::ifstream &file);
	std::vector<double> taskSetUtilization;
	std::vector<bool> schedulability;
public:
	BCLExperiment();
	int set();
	int reset();
	int run();
	int output();
};
#endif