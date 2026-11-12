
/* sweep: guess */

void Player_FireMissileLock(void)

{
  if ((DAT_005b2154 & 0x1000) != 0) {
    Decoy_Drop(GLBL_SOME_CONTEXT,&DAT_005b214c,DAT_005b1f0c + 0x5b0,1);
  }
  return;
}

