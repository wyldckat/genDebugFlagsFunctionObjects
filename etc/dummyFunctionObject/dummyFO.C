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

\*---------------------------------------------------------------------------*/

#include "dummyFO.H"
#include "objectRegistry.H"
#include "Time.H"
#include "dictionary.H"

//Include list of included class references
#include "dummyIncludeList.H"

// * * * * * * * * * * * * * * Static Data Members * * * * * * * * * * * * * //

defineTypeNameAndDebug(Foam::dummyFO, 0);


// * * * * * * * * * * * * * * * * Constructors  * * * * * * * * * * * * * * //

Foam::dummyFO::dummyFO
(
    const word& name,
    const objectRegistry& obr,
    const dictionary& dict,
    const bool loadFromFiles
)
:
    name_(name),
    obr_(obr),
    active_(true)
{
    read(dict);
}


// * * * * * * * * * * * * * * * * Destructor  * * * * * * * * * * * * * * * //

Foam::dummyFO::~dummyFO()
{}


// * * * * * * * * * * * * * * * Member Functions  * * * * * * * * * * * * * //

void Foam::dummyFO::read(const dictionary& dict)
{
    if (active_)
    {
        //Include list of lookup objects
        #include "dummyCList.H"

        //do something?
        Info << dummyFO::name() << ": read dictionary and applied debug flags." << endl;
    }
}


void Foam::dummyFO::execute()
{
//     if (active_)
//     {
//         //do something?
//         Info << dummyFO::name() << ": execute tasks." << endl;
//     }
}


void Foam::dummyFO::end()
{
//     if (active_)
//     {
//         //do something?
//         Info << dummyFO::name() << ": last task." << endl;
//     }
}


void Foam::dummyFO::write()
{
//     if (active_)
//     {
//         //do something?
//         Info << dummyFO::name() << ": write task." << endl;
//     }
}


// ************************************************************************* //
