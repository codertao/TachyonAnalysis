
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* refine: asm: texture LOD/step checks (flag 0x2000), then picks edge/span routines from the mode
   table (0x4e4ad8/ac8/ac4) */

void SwAsm_TriSelectSpanFuncs(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined **ppuVar6;
  
  uVar1 = DAT_004e4a34;
  DAT_004e4a34 = DAT_004e4a34 << 8;
  DAT_004e4f10 = DAT_004e4a28 & 0x2000;
  if (DAT_004e4f10 != 0) {
    uVar2 = DAT_004e4a60 ^ (int)DAT_004e4a60 >> 0x1f;
    uVar5 = DAT_004e4a64 ^ (int)DAT_004e4a64 >> 0x1f;
    uVar3 = uVar2;
    if (uVar2 < uVar5) {
      uVar3 = uVar5;
      uVar5 = uVar2;
    }
    uVar3 = ((int)(uVar5 * 5) >> 4) + uVar3;
    uVar4 = DAT_004e4a68 ^ (int)DAT_004e4a68 >> 0x1f;
    uVar2 = DAT_004e4a6c ^ (int)DAT_004e4a6c >> 0x1f;
    uVar5 = uVar4;
    if (uVar4 < uVar2) {
      uVar5 = uVar2;
      uVar2 = uVar4;
    }
    uVar5 = uVar5 + ((int)(uVar2 * 5) >> 4);
    if (uVar3 < uVar5) {
      uVar5 = uVar3;
    }
    if (0xc000 < (int)(uVar5 << ((byte)DAT_004e4adc & 0x1f))) {
      DAT_004e4f10 = 0;
    }
  }
  if (((DAT_004e4b00 == 0) || (DAT_004e4b04 != 0)) && ((DAT_004e4b00 != 0 || (DAT_004e4b04 != 0))))
  {
    DAT_004e4f10 = 0;
  }
  ppuVar6 = DAT_004e4860;
  if ((DAT_004e4b0c != 0) &&
     (((DAT_004e4a28 & 0x10000000) == 0 || ((DAT_004e4a28 & 0x20000000) == 0)))) {
    if ((DAT_004e4a28 & 0x10000000) == 0) {
      if ((DAT_004e4a28 & 0x20000000) == 0) {
        ppuVar6 = &PTR_LAB_005290d0;
      }
      else {
        ppuVar6 = &PTR_LAB_00526bd0;
      }
    }
    else {
      ppuVar6 = &PTR_LAB_005244d0;
    }
  }
  if ((DAT_004e4a28 & 8) == 0) {
    if ((DAT_004e4a28 & 0x80) == 0) {
      if ((DAT_004e4a28 & 0x100) == 0) {
        if ((DAT_004e4a28 & 0x4000) == 0) {
          if ((DAT_004e4a28 & 0x200) == 0) {
            if ((DAT_004e4a28 & 0x80000) == 0) {
              if (((DAT_004e4a28 & 2) != 0) && (DAT_00604488 == 8)) {
                _DAT_004e4a48 =
                     CONCAT31((int3)(_DAT_004e4a48 >> 8),
                              *(undefined1 *)
                               CONCAT31((int3)((DAT_004e4a34 & 0x1f00) + DAT_004e4acc >> 8),
                                        (char)_DAT_004e4a48));
              }
              ppuVar6 = ppuVar6 + 0x70;
            }
            else {
              ppuVar6 = ppuVar6 + 0xd2;
            }
          }
          else {
            ppuVar6 = ppuVar6 + 0x9a;
          }
        }
        else {
          ppuVar6 = ppuVar6 + 0x8c;
          DAT_004e4998 = SwAsm_Rand();
        }
      }
      else {
        if ((DAT_004e4a28 & 2) != 0) {
          _DAT_004e4a48 = uVar1 & 0xffffff;
        }
        ppuVar6 = ppuVar6 + 0x7e;
      }
    }
    else {
      ppuVar6 = ppuVar6 + 0xa8;
    }
  }
  else if ((DAT_004e4a28 & 0x200) == 0) {
    if ((DAT_004e4a28 & 0x20000) == 0) {
      if ((DAT_004e4a28 & 0x1000000) == 0) {
        if ((DAT_004e4a28 & 0x8000000) == 0) {
          if ((DAT_004e4a28 & 0x2000000) == 0) {
            if ((DAT_004e4a28 & 0x100000) == 0) {
              if ((DAT_004e4a28 & 0x200000) == 0) {
                if ((DAT_004e4a28 & 0x800000) == 0) {
                  if ((DAT_004e4a28 & 0x20) == 0) {
                    if ((DAT_004e4a28 & 0x80) == 0) {
                      if ((DAT_004e4a28 & 0x10) == 0) {
                        if (DAT_004e4f10 != 0) {
                          ppuVar6 = ppuVar6 + 0x1c;
                        }
                      }
                      else if ((DAT_004e4a28 & 0x200) == 0) {
                        if (DAT_004e4f10 == 0) {
                          ppuVar6 = ppuVar6 + 0xe;
                        }
                        else {
                          ppuVar6 = ppuVar6 + 0x2a;
                        }
                      }
                      else {
                        ppuVar6 = ppuVar6 + 0x54;
                      }
                    }
                    else if (DAT_004e4f10 == 0) {
                      ppuVar6 = ppuVar6 + 0x62;
                    }
                    else {
                      ppuVar6 = ppuVar6 + 0x38;
                    }
                  }
                  else {
                    ppuVar6 = ppuVar6 + 0xe0;
                  }
                }
                else {
                  ppuVar6 = ppuVar6 + 0xc4;
                }
              }
              else {
                ppuVar6 = ppuVar6 + 0x118;
              }
            }
            else if (DAT_004e4f10 == 0) {
              ppuVar6 = ppuVar6 + 0x10a;
            }
            else {
              ppuVar6 = ppuVar6 + 0x15e;
            }
          }
          else {
            ppuVar6 = ppuVar6 + 0xfc;
          }
        }
        else {
          ppuVar6 = ppuVar6 + 0x126;
        }
      }
      else {
        ppuVar6 = ppuVar6 + 0xb6;
      }
    }
    else if ((DAT_004e4a28 & 0x80000000) == 0) {
      if (DAT_004e4f10 == 0) {
        ppuVar6 = ppuVar6 + 0xee;
      }
      else {
        ppuVar6 = ppuVar6 + 0x150;
      }
    }
    else if (DAT_004e4f10 == 0) {
      ppuVar6 = ppuVar6 + 0x134;
    }
    else {
      ppuVar6 = ppuVar6 + 0x142;
    }
  }
  else {
    ppuVar6 = ppuVar6 + 0x46;
  }
  DAT_004e4ad8 = *ppuVar6;
  DAT_004e4ac8 = ppuVar6[1];
  if ((DAT_004e4a28 & 1) == 0) {
    if ((DAT_004e4a28 & 2) == 0) {
      DAT_004e4ac4 = ppuVar6[2];
      _DAT_004e4ac0 = ppuVar6[3];
      return;
    }
    DAT_004e4ac4 = ppuVar6[4];
    _DAT_004e4ac0 = ppuVar6[5];
    return;
  }
  if ((DAT_004e4b00 == 0) || (DAT_004e4b04 == 0)) {
    if (DAT_004e4b00 == 0) {
      if (DAT_004e4b04 == 0) {
        DAT_004e4ac4 = ppuVar6[6];
        _DAT_004e4ac0 = ppuVar6[7];
      }
      else {
        DAT_004e4ac4 = ppuVar6[10];
        _DAT_004e4ac0 = ppuVar6[0xb];
      }
    }
    else {
      DAT_004e4ac4 = ppuVar6[8];
      _DAT_004e4ac0 = ppuVar6[9];
    }
  }
  else {
    DAT_004e4ac4 = ppuVar6[0xc];
    _DAT_004e4ac0 = ppuVar6[0xd];
  }
  return;
}

