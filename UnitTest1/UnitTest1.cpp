#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1.2/OneLinkedList.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			bool t;
			Node* head;
			head = NULL;
			OneLinkedList a1;
			t = a1.Init(head);

			Assert::AreEqual(t, false);
		}
	};
}
