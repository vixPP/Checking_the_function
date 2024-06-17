#include <catch2/catch_test_macros.hpp>
#include "catch2/catch_session.hpp"
#include "Checking_the_function.cpp"

TEST_CASE("Checking_the_function")
{
    List A_list;

    //test pushback
    SECTION("Checking the PushBack")
    {
        CHECK(A_list.Empty() == true);
        A_list.PushBack(12);
        A_list.PushBack(13);
        CHECK(A_list.Size() == 2);
        CHECK(A_list.PopBack() == 13);
        A_list.PushBack(14);
        A_list.PushBack(15);
        CHECK(A_list.Size() == 3);
        CHECK(A_list.PopBack() == 15);
    }

    SECTION("Checking the list size")
    {
        CHECK(A_list.Size() == 0);
        A_list.PushBack(0);
        A_list.PushBack(0);
        CHECK(A_list.Size() == 2);
        A_list.PopBack();
        CHECK(A_list.Size() == 1);
        A_list.PopBack();
        CHECK(A_list.Size() == 0);
    }

    SECTION("сhecking the list cleanup")
    {
        CHECK(A_list.Size() == 0);
        A_list.PushBack(0);
        A_list.PushBack(0);
        CHECK(A_list.Size() == 2);
        A_list.Clear();
        CHECK(A_list.Size() == 0);
    }

    SECTION("Checking exception handling")
    {
        REQUIRE_THROWS(A_list.PopBack()); 
        REQUIRE_THROWS(A_list.PopFront()); 
    }

}

int main(int argc, char* argv[])
{
    return Catch::Session().run(argc, argv);
}