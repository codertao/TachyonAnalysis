
undefined4 some_kind_of_play_sound(undefined4 param_1,undefined4 voice_key,uint param_3,int param_4)

{
  int pPlayingSoundMaybe;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_10 [16];
  
  if ((*(int *)(*(int *)(param_4 + 0x5c) + 0x24) == 0) &&
     (*(int *)(*(int *)(param_4 + 0x5c) + 0x28) == 0)) {
    copy_p2_to_p1_and_get_basename_(local_10,param_1);
    pPlayingSoundMaybe = check_is_snd_playing_maybe(local_10);
    if ((pPlayingSoundMaybe != 0) && (*(int *)(pPlayingSoundMaybe + 0x50) != 0)) {
      iVar3 = *(int *)(pPlayingSoundMaybe + 0x54);
      uVar4 = 0;
      if (*(int *)(pPlayingSoundMaybe + 0x50) != 0) {
        do {
          iVar1 = __stricmp(iVar3,voice_key);
          if (iVar1 == 0) {
            if ((*(int *)(iVar3 + 0x20) != 0) &&
               ((uint)(DAT_005897e4 - *(int *)(iVar3 + 0x20)) < param_3)) {
              return 0;
            }
            if (*(int *)(pPlayingSoundMaybe + 0x6c) == 0) {
              uVar2 = 0;
            }
            else {
              uVar2 = *(undefined4 *)(*(int *)(pPlayingSoundMaybe + 0x6c) + 0x78);
            }
            SrvSend_PlayNamedSound(local_10,voice_key,1,uVar2,param_4);
            *(int *)(iVar3 + 0x20) = DAT_005897e4;
            return 1;
          }
          uVar4 = uVar4 + 1;
          iVar3 = iVar3 + 0x40;
        } while (uVar4 < *(uint *)(pPlayingSoundMaybe + 0x50));
      }
    }
  }
  return 0;
}

