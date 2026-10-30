
void FUN_0044b8c0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_0044b9b0();
  iVar1 = Cbin_Open(s_face_def_00547a64);
  if (iVar1 != 0) {
    DAT_00592e5c = Cbin_CountEntries(s_PLAYER_FACES_00547a4c,&DAT_00547a5c);
    Cbin_SelectGroup(s_PLAYER_FACES_00547a4c);
    FUN_0048e3d0(&DAT_00592e58,(DAT_00592e5c * 3 + 3) * 8,4,s_MP_FACES_00547a40,0xa000);
    iVar1 = DAT_00592e58;
    iVar2 = FUN_0049bdb0(&DAT_00547a5c,DAT_00592e58,0xf,0,4,1);
    if (iVar2 != 0) {
      puVar3 = (undefined4 *)(iVar1 + 0x10);
      do {
        FUN_0049b930(&DAT_00547a5c,0,0,puVar3,1,2);
        FUN_0049b930(&DAT_00547a5c,0,0,puVar3 + 1,1,3);
        FUN_00445730(iVar1,1,*puVar3,puVar3[1],0);
        iVar1 = iVar1 + 0x18;
        puVar3 = puVar3 + 6;
        iVar2 = FUN_0049bdb0(&DAT_00547a5c,iVar1,0xf,0,4,1);
      } while (iVar2 != 0);
    }
    Cbin_Close();
  }
  return;
}

