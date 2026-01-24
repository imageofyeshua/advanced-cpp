import <iostream>;
import <utility>;
using namespace std;

enum class PieceType
{
  King = 1,
  Queen,
  Rook = 10,
  Pawn
};

int main()
{
  {
    PieceType piece{ PieceType::King };
    auto underlyingValue{ to_underlying(piece) };
    cout << "PieceType:King >> " << static_cast<int>(piece) << endl;
    cout << "underlyingValue >> " << underlyingValue << endl;
  }

  {
    using enum PieceType;
    PieceType piece{ King };
    cout << "PieceType:King >> " << static_cast<int>(piece) << endl;
  }

  {
    using PieceType::King;
    PieceType piece{ King };
    piece = PieceType::Queen;
    cout << "PieceType:Queen >> " << static_cast<int>(piece) << endl;
  }

}
