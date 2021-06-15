const movies = [
    {
        title: "Amadeus",
        score: 99
    },
    {
        title: "Stand By Me",
        score: 85
    },
    {
        title: "Parasite",
        score: 90
    },
]
movies.forEach(function (movie) {
    //console.log(movie)
    console.log(`${movie.title} : ${movie.score}/100`)
})

