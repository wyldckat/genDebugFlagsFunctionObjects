/*---------------------------------------------------------------------------*\
License
    This file is NOT part of OpenFOAM, but is heavily based on it's code.
    OpenFOAM official website: www.openfoam.org

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

Class
    Foam::dummyFO

Description
    Based on OpenFOAM's Function Objects, providing this way a base structure
  for user's to get started with their own function objects.

SourceFiles
    dummyFO.C

\*---------------------------------------------------------------------------*/

#ifndef dummyFO_H
#define dummyFO_H

#include "stringList.H"
#include "pointFieldFwd.H"

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{

// Forward declaration of classes
class objectRegistry;
class dictionary;
class mapPolyMesh;

/*---------------------------------------------------------------------------*\
                  Class dummyFO Declaration
\*---------------------------------------------------------------------------*/

class dummyFO
{
    // Private data

        //- Name of this set of dummyFO objects
        word name_;

        //- Owner database
        const objectRegistry& obr_;

        //- On/off switch
        bool active_;

        //- Name of file to update
        //fileName fileToUpdate_;

    // Private Member Functions

        //- Disallow default bitwise copy construct
        dummyFO(const dummyFO&);

        //- Disallow default bitwise assignment
        void operator=(const dummyFO&);


public:

    //- Runtime type information
    TypeName("dummyFO");


    // Constructors

        //- Construct for given objectRegistry and dictionary.
        //  Allow the possibility to load fields from files
        dummyFO
        (
            const word& name,
            const objectRegistry&,
            const dictionary&,
            const bool loadFromFiles = false
        );


    //- Destructor
    virtual ~dummyFO();


    // Member Functions

        //- Return name of the set of dummyFO
        virtual const word& name() const
        {
            return name_;
        }

        //- Read the dummyFO data
        virtual void read(const dictionary&);

        //- Execute, currently does nothing
        virtual void execute();

        //- Execute at the final time-loop, currently does nothing
        virtual void end();

        //- Calculate the dummyFO and write
        virtual void write();

        //- Update for changes of mesh
        virtual void updateMesh(const mapPolyMesh&)
        {}

        //- Update for changes of mesh
        virtual void movePoints(const pointField&)
        {}
};


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

} // End namespace Foam

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

#endif

// ************************************************************************* //
