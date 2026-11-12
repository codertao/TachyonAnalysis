
/* root +0x134 after power loss: hold heading, no thrust */

void CapShip_DriftHook(int param_1)

{
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  Entity_ApplyTurnControl
            (0,*(float *)(param_1 + 0xd4),(float *)(param_1 + 0xf8),
             (ShipFlight *)(*(int *)(param_1 + 0x8c) + 0x84),0,(PowerBlock *)(param_1 + 0x144),0,
             1.4013e-45);
  CapShip_ApplyThrust(param_1);
  return;
}

