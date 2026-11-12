
/* CRT (was probably_find_in_pff; caller get_actual_filename_from_pff just splits the path) */

void __splitpath(byte *search_for,byte *param_2,undefined1 *param_3,int pff_entry_list_thing,
                undefined1 *buf_out)

{
  byte bVar1;
  size_t sVar2;
  byte *pbVar3;
  uint uVar4;
  byte *local_8;
  
  local_8 = (byte *)0x0;
  sVar2 = _strlen((char *)search_for);
  if ((sVar2 == 0) || (search_for[1] != 0x3a)) {
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
  }
  else {
    if (param_2 != (undefined1 *)0x0) {
      __mbsnbcpy(param_2,search_for,2);
      param_2[2] = 0;
    }
    search_for = search_for + 2;
  }
  param_2 = (byte *)0x0;
  pbVar3 = search_for;
  if (*search_for != 0) {
    do {
      bVar1 = *pbVar3;
      if ((*(byte *)((int)&DAT_006c9c60 + bVar1 + 1) & 4) == 0) {
        if ((bVar1 == 0x2f) || (bVar1 == 0x5c)) {
          param_2 = pbVar3 + 1;
        }
        else if (bVar1 == 0x2e) {
          local_8 = pbVar3;
        }
      }
      else {
        pbVar3 = pbVar3 + 1;
      }
      pbVar3 = pbVar3 + 1;
    } while (*pbVar3 != 0);
    if (param_2 != (byte *)0x0) {
      if (param_3 != (undefined1 *)0x0) {
        uVar4 = (int)param_2 - (int)search_for;
        if (0xfe < uVar4) {
          uVar4 = 0xff;
        }
        __mbsnbcpy(param_3,search_for,uVar4);
        param_3[uVar4] = 0;
      }
      goto LAB_004be060;
    }
  }
  param_2 = search_for;
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
LAB_004be060:
  search_for = pbVar3;
  if ((local_8 == (byte *)0x0) || (local_8 < param_2)) {
    if (pff_entry_list_thing != 0) {
      uVar4 = 0xff;
      if ((uint)((int)search_for - (int)param_2) < 0xff) {
        uVar4 = (int)search_for - (int)param_2;
      }
      __mbsnbcpy(pff_entry_list_thing,param_2,uVar4);
      *(undefined1 *)(uVar4 + pff_entry_list_thing) = 0;
    }
    if (buf_out != (undefined1 *)0x0) {
      *buf_out = 0;
    }
  }
  else {
    if (pff_entry_list_thing != 0) {
      uVar4 = (int)local_8 - (int)param_2;
      if (0xfe < uVar4) {
        uVar4 = 0xff;
      }
      __mbsnbcpy(pff_entry_list_thing,param_2,uVar4);
      *(undefined1 *)(uVar4 + pff_entry_list_thing) = 0;
    }
    if (buf_out != (undefined1 *)0x0) {
      uVar4 = 0xff;
      if ((uint)((int)search_for - (int)local_8) < 0xff) {
        uVar4 = (int)search_for - (int)local_8;
      }
      __mbsnbcpy(buf_out,local_8,uVar4);
      buf_out[uVar4] = 0;
    }
  }
  return;
}

