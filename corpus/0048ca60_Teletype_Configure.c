
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Teletype_Configure(undefined4 param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    if ((param_3 & 1) != 0) {
      Teletype_SetFontName
                (param_1,*(undefined1 *)(param_2 + 0x11),param_2[0xe],param_2[0xf],param_2[0x10]);
    }
    if ((param_3 & 2) != 0) {
      Teletype_SetVarF4(param_1,param_2[9]);
    }
    if ((param_3 & 4) != 0) {
      Teletype_SetClip(param_1,param_2[10],param_2[0xb],param_2[0xc],param_2[0xd]);
    }
    if ((param_3 & 8) != 0) {
      Teletype_SetLineSpacing(param_1,param_2[0x12],param_2[0x13]);
    }
    if ((param_3 & 0x10) != 0) {
      Teletype_SetColor(param_1,*(undefined1 *)((int)param_2 + 0x1a),
                        *(undefined1 *)((int)param_2 + 0x19),*(undefined1 *)(param_2 + 6),
                        *(undefined1 *)((int)param_2 + 0x1d),*(undefined1 *)(param_2 + 7),
                        *(undefined1 *)((int)param_2 + 0x1b));
    }
    if ((param_3 & 0x20) != 0) {
      Teletype_SetShadowColor
                (param_1,*(undefined1 *)(param_2 + 8),*(undefined1 *)((int)param_2 + 0x1f),
                 *(undefined1 *)((int)param_2 + 0x1e),*(undefined1 *)((int)param_2 + 0x23),
                 *(undefined1 *)((int)param_2 + 0x22),*(undefined1 *)((int)param_2 + 0x21));
    }
    if ((param_3 & 0x40) != 0) {
      Teletype_SetRate(param_1,param_2[0x15]);
    }
    if ((param_3 & 0x200) != 0) {
      if ((float)param_2[0x18] == _DAT_0052e598) {
        param_2[0x18] = 0x3f800000;
      }
      Teletype_SetDelay(param_1,param_2[0x18]);
    }
    if ((param_3 & 0x400) != 0) {
      Teletype_SetLooping(param_1,param_2[3]);
    }
    if ((param_3 & 0x2000) != 0) {
      iVar1 = param_2[5];
      if (iVar1 == 0) {
        iVar1 = 0xffff;
      }
      Teletype_SetVarE4(param_1,iVar1);
    }
    if ((param_3 & 0x1000) != 0) {
      Teletype_SetFlags(param_1,param_2[4]);
    }
    if ((param_3 & 0x80) != 0) {
      if (param_2[2] == 0) {
        Teletype_SetString(param_1,*param_2,param_2[1],param_2[0x14]);
      }
      else {
        Teletype_SetStringList(param_1,*param_2,param_2[2],param_2[0x14]);
      }
    }
    if ((param_3 & 0x100) != 0) {
      Teletype_SetPos(param_1,param_2[0x16],param_2[0x17]);
    }
  }
  return;
}

