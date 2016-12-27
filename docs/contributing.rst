Contributing
============

All documentation changes **must** be done on the branch ``feature/documentation``, under penalty of commit reversion.

Previewing your changes
***********************
You should do this *before* you commit.
  1. ``cd docs``
  2. OS-Dependent:
  
    * On Windows: ``.\make html``
    * On Linux: ``make html``

  3. Open ``_build/html/filename.html`` in your browser of choice. (If that's IE, rethink your life choices.)

Creating Subsystem docs
***********************

  1. Copy ``_templates/subsystem.rst`` into ``docs/name_of_sub_system.rst``
  2. Fill out the file
  3. Add, commit, and push. Read The Docs should automatically build the new HTML pages for you.
