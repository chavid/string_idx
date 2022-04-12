
#include "static_strings.h"
#include "strong_int.h"
#include <string_view>
#include <string>
#include <sstream>

using namespace std::string_view_literals ;

int main()
 {
  StaticStrings::init() ;

  std::string s1 {"COLOR1"} ;
  auto s1r { StaticStrings::ptr(s1) } ;
  auto s2r { StaticStrings::ptr("Color2"sv) } ;
  auto s3r { StaticStrings::ptr("Color1") } ;

  std::cout<<*s1r.value()<<" "<<*s2r.value()<<" "<<*s3r.value()<<" "<<std::endl ;
  std::cout<<(s1r==s2r)<<" "<<(s1r==s3r)<<" "<<std::endl ;

  return 0 ;
 }

