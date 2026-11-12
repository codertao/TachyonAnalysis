
/* sweep: guess */

void Voice_LoadSettings(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  DAT_005658ac = GLBL_spacesav[0x47];
  puVar2 = (undefined4 *)&DAT_00565880;
  for (iVar1 = 0x7e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_005658b0 = GLBL_spacesav[0x46];
  DAT_00565a34._0_1_ = (undefined1)GLBL_spacesav[0x48];
  DAT_00565a34._1_1_ = (undefined1)GLBL_spacesav[0x49];
  DAT_00565a34._2_1_ = (undefined1)GLBL_spacesav[0x4a];
  DAT_00565a3a = (undefined1)GLBL_spacesav[0x44];
  DAT_00565a3b = (undefined1)GLBL_spacesav[0x45];
  DAT_00565a3c = (undefined1)GLBL_spacesav[0x4c];
  DAT_00565a64._0_1_ = (undefined1)GLBL_spacesav[0x4e];
  DAT_005658a4 = 0xffffffff;
  DAT_005658a8 = 0xffffffff;
  DAT_0056589c = 0xffffffff;
  DAT_00565a68 = GLBL_spacesav[0x50];
  DAT_00565a38 = DAT_005a6648;
  DAT_00565880 = (char)GLBL_spacesav[0x40];
  DAT_00565a39 = DAT_005a6644;
  DAT_00565a34._3_1_ = DAT_005a664c;
  if ((char)GLBL_spacesav[0x40] != '\0') {
    DAT_00565881 = DAT_00563e9c != 0;
    return;
  }
  DAT_00565881 = 0;
  return;
}

