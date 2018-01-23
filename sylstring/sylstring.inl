// sylstring.inl - Thai syllable string class
// Author: Theppitak Karoonboonyanan <theppitak@gmail.com>
// Created: 2018-01-16

/////////////////
//  class Syl  //
/////////////////

inline
Syl::Syl (EInitConst iConst1, ESecInitConst iConst2, EVowel vowel,
          EEndConstClass eConst, ETone tone)
  : iConst1 (iConst1),
    iConst2 (iConst2),
    vowel (vowel),
    eConst (eConst),
    tone (tone)
{
}

inline
Syl::Syl (char iConst1, char iConst2, char vowel, char eConst, char tone)
  : iConst1 (static_cast<EInitConst> (iConst1)),
    iConst2 (static_cast<ESecInitConst> (iConst2)),
    vowel (static_cast<EVowel> (vowel)),
    eConst (static_cast<EEndConstClass> (eConst)),
    tone (static_cast<ETone> (tone))
{
}

///////////////////////
//  class SylString  //
///////////////////////

inline SylString&
SylString::operator= (const Syl& syl)
{
    this->clear();
    return *this += syl;
}

inline SylString&
SylString::operator+= (const Syl& syl)
{
    this->push_back (syl);
    return *this;
}

/*
vi:ts=4:ai:expandtab
*/