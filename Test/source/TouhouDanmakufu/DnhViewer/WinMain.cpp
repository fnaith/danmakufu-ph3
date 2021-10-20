﻿#include"GcLibImpl.hpp"
#include"../Test/TestSuite.hpp"
#include"../Test/Gstd/Script/ScriptEngineTest.hpp"
#include"../Test/Gstd/Script/ScriptMachineTest.hpp"
#include"../Test/Gstd/GstdUtility/PathPropertyTest.hpp"
#include"../Test/Gstd/MersenneTwisterTest.hpp"
#include"../Test/Gstd/Script/BuildInOperationTest.hpp"

int APIENTRY wWinMain(HINSTANCE hInstance,
                        HINSTANCE hPrevInstance,
                        LPWSTR lpCmdLine,
                        int nCmdShow )
{
	(new test::ScriptEngineTest())->Run();
	(new test::ScriptMachineTest())->Run();
	(new test::PathPropertyTest())->Run();
	(new test::MersenneTwisterTest())->Run();
	(new test::BuildInOperationTest())->Run();

	return 0;
}
