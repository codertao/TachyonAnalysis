
/* sweep */

void Resupply_ApplyNotice(undefined4 param_1,undefined4 param_2)

{
  switch(param_1) {
  case 1:
    Snd_Play2D(1,0xe,0x1f,0xff);
    return;
  case 2:
    Snd_Play2D(1,0xe,0x20,0xff);
    return;
  case 3:
    Resupply_AddLaser(param_2);
    break;
  case 4:
    Resupply_AddBurner(param_2);
    break;
  case 5:
  case 6:
  case 7:
    Snd_Play2D(1,0xe,0x21,0xff);
    return;
  case 8:
    Resupply_AddLaser(100000);
    Resupply_AddBurner(100000);
    Snd_Play2D(1,0xe,0x22,0xff);
    return;
  case 9:
    Resupply_AddLaser(param_2);
    Resupply_AddBurner(param_2);
    Snd_Play2D(1,0xe,0x1f,0xff);
    return;
  case 10:
    Snd_Play2D(1,0xe,0x26,0xff);
  default:
    return;
  }
  Snd_Play2D(1,0xe,0x1f,0xff);
  return;
}

