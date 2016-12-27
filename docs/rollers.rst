Rollers
=======

The rollers subsystem controls the roller on the front of the robot, along with the arm it's attached to.

Methods
-------
Roll
^^^^^^^^^^
Roll the roller.

Arguments:

``bool forward``
  Whether to roll forward or not.
``double _speed``
  The speed to roll at.

Returns: Void method

Variables
---------
talon_rollers_lift_left
  Controls the roller lift.
  
  * Type: ``CANTalon``
  * Private: Yes
