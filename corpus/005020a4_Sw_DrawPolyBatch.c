
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* (verts, n, verts2, n2, flags) float vertices (x,y,z, colour +0x10/+0x14, u/v +0x18/+0x1c); flag
   nibbles at 0x4ec090.. (meaning of args 2-4 unconfirmed) */

void __cdecl Sw_DrawPolyBatch(void *verts,int n,void *verts2,int n2,uint flags)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined *puVar7;
  
  DAT_004ec078 = verts;
  _DAT_004ec07c = n;
  DAT_004ec080 = verts2;
  _DAT_004ec084 = n2;
  _DAT_004ec088 = flags;
  _DAT_004ec090 = flags & 0x70;
  DAT_004ec094 = flags & 7;
  DAT_004ec098 = flags & 0x700;
  DAT_004ec09c = flags & 0x7000;
  _DAT_004ec0a0 = 0xffffffff;
  if ((flags & 0x20000) == 0) {
    _DAT_004ec0a0 = 0xffffff;
  }
  if ((flags & 0x10000) == 0) {
    _DAT_004ec0a0 = _DAT_004ec0a0 & 0xffffff00;
  }
  puVar7 = &DAT_004ec0a4;
  do {
    fVar4 = *(float *)((int)verts + 4) * _DAT_004ec060;
    fVar5 = *(float *)((int)verts + 8) * _DAT_004ec064;
    *(int *)(puVar7 + 0x18) = (int)ROUND(*(float *)verts * _DAT_004ec060);
    *(int *)(puVar7 + 0x1c) = (int)ROUND(fVar4);
    *(int *)(puVar7 + 0x14) = (int)ROUND(fVar5);
    *(int *)(puVar7 + 0x20) = (int)ROUND(*(float *)((int)verts + 0x18) * _DAT_004ec06c);
    *(int *)(puVar7 + 0x24) = (int)ROUND(*(float *)((int)verts + 0x1c) * _DAT_004ec06c);
    *(int *)(puVar7 + 0x14) = 0x40000000 - *(int *)(puVar7 + 0x14);
    *(uint *)(puVar7 + 0x28) =
         ((uint)*(byte *)((int)verts + 0x10) << 0x10 |
         (uint)*(float *)((int)verts + 0x14) & 0xff0000ff ^ 0xff000000) & _DAT_004ec0a0;
    iVar6 = _DAT_004ec07c;
    verts = (void *)((int)verts + 0x28);
    puVar7 = puVar7 + 0x2c;
    _DAT_004ec07c = _DAT_004ec07c + -1;
  } while (_DAT_004ec07c != 0 && 0 < iVar6);
  if (DAT_004ec098 == 0x400) {
    if (DAT_004ec09c == 0x5000) {
      DAT_004e4a28 = 8;
    }
    else if (DAT_004ec09c == 0x2000) {
      DAT_004e4a28 = 0x1000008;
    }
    else if (DAT_004ec094 == 2) {
      DAT_004e4a28 = 0x100008;
    }
    else if (DAT_004ec094 == 1) {
      DAT_004e4a28 = 0x2000008;
    }
    else {
      DAT_004e4a28 = 8;
    }
  }
  else if (DAT_004ec098 == 0x600) {
    if (DAT_004ec09c == 0x5000) {
      DAT_004e4a28 = 0x19;
    }
    else if (DAT_004ec09c == 0x2000) {
      DAT_004e4a28 = 0x1000008;
    }
    else if (DAT_004ec094 == 2) {
      DAT_004e4a28 = 0x200008;
    }
    else {
      DAT_004e4a28 = 9;
    }
  }
  else if (DAT_004ec09c == 0x1000) {
    DAT_004e4a28 = 0x20008;
  }
  else {
    DAT_004e4a28 = 4;
  }
  if ((_DAT_004ec088 & 0x100000) != 0) {
    DAT_004e4a28 = DAT_004e4a28 | 0x10000000;
  }
  if ((_DAT_004ec088 & 0x200000) != 0) {
    DAT_004e4a28 = DAT_004e4a28 | 0x20000000;
  }
  if ((_DAT_004ec088 & 0x800000) != 0) {
    DAT_004e4a28 = DAT_004e4a28 | 0x2000;
  }
  do {
    uVar3 = *DAT_004ec080;
    puVar1 = DAT_004ec080 + 1;
    puVar2 = DAT_004ec080 + 2;
    DAT_004ec080 = DAT_004ec080 + 3;
    if ((((DAT_004e4a28 & 0x200000) != 0) &&
        (DAT_004e4a2c = ((&DAT_004ec0cc)[(uint)uVar3 * 0xb] & 0xff0000) >> 0x10, DAT_0060f874 != 0))
       && (DAT_004e4a2c = DAT_004e4a2c * 2, 0xff < DAT_004e4a2c)) {
      DAT_004e4a2c = 0xff;
    }
    Sw_DrawTriangle(&DAT_004ec0a4 + (uint)uVar3 * 0x2c,&DAT_004ec0a4 + (uint)*puVar1 * 0x2c,
                    &DAT_004ec0a4 + (uint)*puVar2 * 0x2c,GLBL_some_str,DAT_004ec08c);
    _DAT_004ec084 = _DAT_004ec084 + -1;
  } while (_DAT_004ec084 != 0);
  return;
}

