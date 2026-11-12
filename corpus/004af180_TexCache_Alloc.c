
/* sweep */

undefined4 * TexCache_Alloc(void)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_0062c12c;
  uVar2 = 0;
  do {
    if (puVar1[9] == 0) {
      DAT_00666aac = DAT_00666aac + 1;
      puVar1[9] = 1;
      if (uVar2 < DAT_00668fb0) {
        return puVar1;
      }
      DAT_00668fb0 = uVar2 + 1;
      return puVar1;
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 0x14;
  } while (uVar2 < 3000);
  Pak_Error(s_Material_Limited_exceeded__0055eb80);
  return (undefined4 *)0x0;
}

