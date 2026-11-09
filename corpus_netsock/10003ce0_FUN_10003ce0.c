
void FUN_10003ce0(void)

{
  FILE *_File;
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  
  _File = fopen(s_netdump_txt_100071e8,&DAT_10007010);
  if (_File != (FILE *)0x0) {
    fprintf(_File,s_CONNECTIONS_100071d8);
    uVar4 = 0;
    puVar2 = DAT_10019af8;
    if (DAT_100198b8 != 0) {
      do {
        fprintf(_File,s_Slot__03d___InUse____d___IP____8_10007188,uVar4,*puVar2,puVar2[1],puVar2[3],
                puVar2[2],puVar2[4]);
        uVar4 = uVar4 + 1;
        puVar2 = puVar2 + 6;
      } while (uVar4 < DAT_100198b8);
    }
    fprintf(_File,s_PLAYERS_1000717c);
    uVar4 = 0;
    if (DAT_100198b8 != 0) {
      piVar3 = (int *)(DAT_10019afc + 0xa4);
      do {
        if (*piVar3 == 0) {
          uVar1 = 0xffffffff;
        }
        else {
          uVar1 = (uint)(*piVar3 - (int)DAT_10019af8) / 0x18;
        }
        fprintf(_File,s_Player__3d___InUse____d___ID_____1000713c,uVar4,piVar3[-2],piVar3[-1],uVar1,
                piVar3[-3]);
        uVar4 = uVar4 + 1;
        piVar3 = piVar3 + 0x2f;
      } while (uVar4 < DAT_100198b8);
    }
    fclose(_File);
  }
  return;
}

