Drivetrain
==========

The drivetrain subsytem controls the six motors which drive the robot's tank drive.

Methods
-------
TankDrive
^^^^^^^^^
Drives the drive train. Also automatically updates the SmartDashboard with the power levels the drive train is set to.

Arguments:

``float leftAxis``
  The power level to set the left set of motors to.
``float rightAxis``
  The power level to set the right set of motors to.

PowerDistOutput
^^^^^^^^^^^^^^^
Returns the current draw on ``LEFT_MOTOR_FOLLOWER`` according to the PDP board.

Arguments:
``null``

Returns:
Current draw on ``LEFT_MOTOR_FOLLOWER``, as an ``int``.

PowerSide
^^^^^^^^^
Gets the total current draw on a given side of the drive train.

Arguments:

``int value``
  An ``int``, preferably 0 or 1, the specifies which side to get the current draw of.

Returns:

The currennt on the side specified by the ``value`` argument.
 * If ``value`` is 0, the current draw of the left side is returned.
 * If ``value`` is 1, the current draw of the right side is returned.
 * For any other value, 0 is returned.
