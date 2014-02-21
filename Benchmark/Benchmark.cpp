// Benchmark.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "leveldb/c.h"

int main(int argc, char* argv[])
{
    return leveldb_benchmark(argc, argv);
}

