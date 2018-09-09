#include <memory>
#include <prach_info.hpp>
#include <unrestricted_set.hpp>
#include<gtest/gtest.h>


using namespace std;
  

class prach_info_factory
{
  public:
  static std::shared_ptr<prach_info> get_prach_info()
  {
    return std::shared_ptr<prach_info>(new unrestricted_set());
  }
};

class prach_info_tests: public testing::Test
{
  public:
  void SetUp() override
  {
    info = prach_info_factory::get_prach_info();
  }
  std::shared_ptr<prach_info> info;
};


TEST_F(prach_info_tests, root_sequence_info_works)
{
  int32_t a,b,c,d,i,k;
  for (a=0;a<16;a++)
  {
      b = info->preambles_on_root_sequence(a);
      ASSERT_EQ(info->preambles_on_root_sequence(a),b);
  }
  for (d=0;d<16;d++)
  {
      c = info->root_sequence_count(d);
      ASSERT_EQ(info->root_sequence_count(d),c);
  }  
  for (i=1;i<63;i++)
  {
      for (k=1;k<16; k++)
      {
        int z = info->root_sequence_index(i, k);
        ASSERT_EQ(info->root_sequence_index(i,k),z);
      }
  }

}
