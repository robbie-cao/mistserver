#include "box.h"
#include <string>
#include <vector>

class Box_stco {
  public:
    Box_stco( );
    ~Box_stco();
    Box * GetBox();
    void AddOffset( uint32_t DataOffset, uint32_t Offset = 0 );
  private:
    Box * Container;

    void WriteOffsets( );
    void SetReserved( );
    std::vector<uint32_t> Offsets;
};//Box_ftyp Class
