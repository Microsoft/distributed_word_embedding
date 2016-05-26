#ifndef DISTRIBUTED_WORD_EMBEDDING_CONSTANT_H_
#define DISTRIBUTED_WORD_EMBEDDING_CONSTANT_H_

/*!
* \file constant.h
* \brief The index of parameter tables and some constant.
*/
#include <cstdint>

#include "multiverso/multiverso.h"
#include "multiverso/util/log.h"


namespace multiverso
{
	namespace wordembedding
	{

		typedef int64_t int64;
		typedef uint64_t uint64;
		typedef float real;

		const int kInputEmbeddingTableId = 0;
		const int kEmbeddingOutputTableId = 1;
		const int kSumGradient2IETableId = 2;
		const int kSumGradient2EOTableId = 3;
		const int kWordCountId = 4;

		const int kTableSize = (int)1e8;
		//const real kEps = static_cast<real>(1e-10);
		const int kMaxWordSize = 901;
		const int kMaxCodeLength = 100;
		const int kMaxString = 100;
		const int kMaxSentenceLength = 1000;
		const int kMaxEXP = 6;

		const int kExpTableSize = 1000;
		const int kMaxExp = 6;
	}
}
#endif
